//
//  UINavigationController+SafePushing.m
//  ycBook
//
//  Created by BBH on 2017/2/27.
//  Copyright © 2017年 Alexander. All rights reserved.
//解决Can't add self as subview崩溃的问题

#import "UINavigationController+SafePushing.h"

@implementation UINavigationController (SafePushing)

-(id)navigationLock
{
    return self.topViewController;
}

-(void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated navigationLock:(id)navigationLock
{
    if (!navigationLock || self.topViewController==navigationLock) {
        [self pushViewController:viewController animated:animated];
    }
}

-(NSArray *)popToViewController:(UIViewController *)viewController animated:(BOOL)animated navigationLock:(id)navigationLock
{
    if (!navigationLock || self.topViewController==navigationLock) {
        return [self popToViewController:viewController animated:animated];
    }
    return @[];
}

-(NSArray *)popToRootViewControllerAnimated:(BOOL)animated navigationLock:(id)navigationLock
{
    if (!navigationLock || self.topViewController==navigationLock) {
        return [self popToRootViewControllerAnimated:animated];
    }
    return @[];
}

@end
