//
//  A5005AppDelegate.h
//  Three Little Pigs Adventure
//
//  Created by Anthony Li on 5/13/2014.
//  Copyright (c) 2014 anli5005. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface A5005AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (unsafe_unretained) IBOutlet NSTextView *output;
@property (weak) IBOutlet NSTextField *input;
@property (weak) IBOutlet NSTextField *points;

@end
