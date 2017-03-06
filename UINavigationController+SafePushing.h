//
//  UINavigationController+SafePushing.h
//  ycBook
//
//  Created by BBH on 2017/2/27.
//  Copyright © 2017年 Alexander. All rights reserved.
//解决Can't add self as subview崩溃的问题

#import <UIKit/UIKit.h>

@interface UINavigationController (SafePushing)

-(id)navigationLock;

-(void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated navigationLock:(id)navigationLock;

-(NSArray *)popToViewController:(UIViewController *)viewController animated:(BOOL)animated navigationLock:(id)navigationLock;

-(NSArray *)popToRootViewControllerAnimated:(BOOL)animated navigationLock:(id)navigationLock;

@end
