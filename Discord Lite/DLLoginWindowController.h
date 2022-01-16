//
//  DLLoginWindowController.h
//  Discord Lite
//
//  Created by Collin Mistr on 10/26/21.
//  Copyright (c) 2021 dosdude1. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "DLController.h"
#import "DLErrorHandler.h"
#import "DLCaptchaWindowController.h"
#import "DLTwoFactorWindowController.h"

@protocol DLLoginWindowDelegate <NSObject>
@optional
-(void)loginWasSuccessful;

@end

@interface DLLoginWindowController : NSWindowController <DLLoginDelegate, DLCaptchaWindowDelegate, DLTwoFactorWindowDelegate> {
    
    IBOutlet NSSecureTextField *passwordField;
    IBOutlet NSTextField *emailField;
    id<DLLoginWindowDelegate> delegate;
    IBOutlet NSProgressIndicator *progressIndicator;
    IBOutlet NSButton *loginButton;
    DLCaptchaWindowController *captchaWindow;
    DLTwoFactorWindowController *twoFactorWindow;
}
- (IBAction)login:(id)sender;
-(void)setDelegate:(id<DLLoginWindowDelegate>)inDelegate;

@end
