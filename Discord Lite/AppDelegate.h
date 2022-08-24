//
//  AppDelegate.h
//  Discord Lite
//
//  Created by Collin Mistr on 10/26/21.
//  Copyright (c) 2021 dosdude1. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "DLController.h"
#import "DLLoginWindowController.h"
#import "DLMainWindowController.h"
#import "DLURLProtocol.h"
#import "DLPreferencesWindowController.h"

@interface AppDelegate : NSObject <DLLoginWindowDelegate, DLMainWindowDelegate> {
    DLLoginWindowController *loginWindow;
    DLMainWindowController *mainWindow;
    DLPreferencesWindowController *preferencesWindow;
}

- (IBAction)showPreferencesWindow:(id)sender;

@end

