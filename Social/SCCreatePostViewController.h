//
//  SCCreatePostViewController.h
//  Social
//
//  Created by Zhitao Wang on 10/8/17.
//  Copyright © 2017 Zhitao Wang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCCreatePostViewControllerDelegate <NSObject>

- (void)didCreatePost;

@end
@interface SCCreatePostViewController : UIViewController

@property (nonatomic, weak) id<SCCreatePostViewControllerDelegate> delegate;

@end
