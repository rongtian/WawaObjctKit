//
//  WawaObject.h
//  WawaObjcKit
//
//  Created by macRong on 2018/10/30.
//  Copyright © 2018年 macRong. All rights reserved.
//

#ifndef WawaObject_h
#define WawaObject_h
#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

// --------- objc-------------

BOOL wawa_objc_valid(id object, Class aClass)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null] &&
        [object isKindOfClass:aClass])
    {
        return YES;
    }
    
    return NO;
}

BOOL wawa_value_valid(id object)
{
    if (object != nil &&
        (NSNull *)object != [NSNull null])
    {
        return YES;
    }
    
    return NO;
}

NS_ASSUME_NONNULL_END
#endif /* WawaObject_h */