//
//  Time.h
//  TimeAlertView
//
//  Created by 纵昂 on 2019/5/11.
//  Copyright © 2019 GitHub:https://github.com/ZongAng123. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Time : NSObject

+ (void)initWithGCD:(int)timeValue beginState:(void (^)())begin endState:(void (^)(int seconds))end;

@end

NS_ASSUME_NONNULL_END
