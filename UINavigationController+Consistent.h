//
//  UINavigationController+Consistent.h
//  ycBook
//
//  Created by BBH on 2017/2/27.
//  Copyright © 2017年 Alexander. All rights reserved.
//解决Can't add self as subview崩溃的问题

#import <UIKit/UIKit.h>
#import  <objc/runtime.h>

/// This char is used to add storage for the is PushingViewController property.

static char const *const ObjectTagKey ="ObjectTag";

@interface UINavigationController ()<UINavigationControllerDelegate>

@property(readwrite, getter= isViewTransitionInProgress) BOOL viewTransitionInProgress;

@end
