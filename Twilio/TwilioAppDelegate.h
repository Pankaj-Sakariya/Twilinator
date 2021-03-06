//
//  TwilioAppDelegate.h
//  Twilio
//
//  Created by Randall Brown on 10/4/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface TwilioAppDelegate : NSObject <NSApplicationDelegate> {
   NSWindow *window;
   IBOutlet NSTextField *textField;
   IBOutlet NSTextField *phoneNumberField;
}

@property (assign) IBOutlet NSWindow *window;
- (IBAction)sendText:(id)sender;

@end
