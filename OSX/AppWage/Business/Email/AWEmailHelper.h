//
//  EmailHelper.h
//  AppWage
//
//  Created by Kyle Hankinson on 1/24/2014.
//  Copyright (c) 2014 Hankinsoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AWEmailHelper : NSObject

+ (AWEmailHelper*) sharedInstance;

- (void) sendDailyEmail: (NSString*) smtpFrom
               password: (NSString*) password
               smtpHost: (NSString*) smtpHost
               smtpPort: (NSNumber*) smtpPort
                    tls: (BOOL) tlsEnabled
                emailTo: (NSArray*) emailTo
             dailyEmail: (BOOL) dailyEmail
          finishedBlock: (void (^)(NSError * error)) onFinished;

- (void) sendDailyEmailAuto;
- (void) sendDailyEmailAuto: (BOOL) sendAlways;

@end
