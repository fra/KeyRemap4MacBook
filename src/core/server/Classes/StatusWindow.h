// -*- Mode: objc; Coding: utf-8; indent-tabs-mode: nil; -*-
#import <Cocoa/Cocoa.h>
#import <Growl/Growl.h>
#import "PreferencesManager.h"

@interface StatusWindow : NSObject <GrowlApplicationBridgeDelegate> {
  NSMutableArray* lines_;
  NSMutableArray* lastMessages_;
  BOOL isGrowlNotRunningWarningDisplayed_;
}

+ (StatusWindow*) getInstance;

- (void) resetStatusMessage;
- (void) setStatusMessage:(NSUInteger)lineIndex message:(NSString*)message;

@end
