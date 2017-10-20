//
//  SCHomeTableViewCell.m
//  Social
//
//  Created by Zhitao Wang on 9/30/17.
//  Copyright © 2017 Zhitao Wang. All rights reserved.
//

#import "SCHomeTableViewCell.h"
#import "SCPost.h"

@interface SCHomeTableViewCell ()
@property (weak, nonatomic) IBOutlet UILabel *messageLabel;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@property (strong, nonatomic) SCPost *post;

@end

@implementation SCHomeTableViewCell


- (void)loadCellWithPost:(SCPost *)post
{
    self.post = post;
    self.titleLabel.text = post.username;
    self.messageLabel.text = post.message;
}

+ (CGFloat)cellHeight
{
    return 80.0;
}

@end

