//
//  SCPost.h
//  Social
//
//  Created by Zhitao Wang on 9/20/17.
//  Copyright © 2017 Zhitao Wang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class CLLocation;

@interface SCPost : NSObject

@property(nonatomic,copy) NSString *message;
@property(nonatomic) NSString *username;
@property (nonatomic)  CLLocation *location;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end
