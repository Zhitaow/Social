//
//  SCUser.h
//  Social
//
//  Created by Zhitao Wang on 9/20/17.
//  Copyright © 2017 Zhitao Wang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SCUser : NSObject

@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *password;

+ (BOOL)isUserLogin;
+ (void)userLogInSuccess;
+ (NSString *)defaultUserName;
+ (void)saveDefaultUserName:(NSString *)username;

@end
