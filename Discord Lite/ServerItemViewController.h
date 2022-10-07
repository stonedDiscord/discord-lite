//
//  ServerItemViewController.h
//  Discord Lite
//
//  Created by Collin Mistr on 10/27/21.
//  Copyright (c) 2021 dosdude1. All rights reserved.
//

#import "ViewController.h"
#import "BadgeTextField.h"
#import "DLServer.h"
#import "DLUtil.h"
#import "NSView+Events.h"
#import "ServerStatusIndicatorView.h"

typedef enum {
    ServerItemViewTypeServer = 0,
    ServerItemViewTypeMe = 1,
    ServerItemViewTypeSeparator = 2
} ServerItemViewType;

@class ServerItemViewController;

@protocol ServerItemDelegate <NSObject>
@optional
-(void)serverItemWasSelected:(ServerItemViewController *)item;
@end

@interface ServerItemViewController : ViewController <DLServerDelegate> {
    DLServer *representedObject;
    IBOutlet NSButton *selectionButton;
    IBOutlet NSView_BGColor *separatorView;
    IBOutlet ServerStatusIndicatorView *statusIndicatorView;
    
    ServerItemViewType type;
    id<ServerItemDelegate> delegate;
    IBOutlet BadgeTextField *mentionBadgeLabel;
    NSImage *iconImage;
    NSTrackingRectTag trackingRect;
    BOOL isSelected;
}

-(id)init;
-(void)setRepresentedObject:(DLServer *)inRepresentedObject;
-(DLServer *)representedObject;

- (IBAction)selectItem:(id)sender;
-(void)setSelected:(BOOL)selected;

-(ServerItemViewType)type;
-(void)setType:(ServerItemViewType)inType;

-(void)setDelegate:(id<ServerItemDelegate>)inDelegate;

-(void)updateRectTracking;

@end
