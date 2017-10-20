//
//  SCPostDetailViewController.h
//  Social
//
//  Created by Zhitao Wang on 10/7/17.
//  Copyright © 2017 Zhitao Wang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SCPost;

@interface SCPostDetailViewController : UIViewController

- (void)loadDetailViewWithPost:(SCPost *)post;

@end
