//
//  TimeAlertView.h
//  TimeAlertView
//
//  Created by 纵昂 on 2019/5/11.
//  Copyright © 2019 GitHub:https://github.com/ZongAng123. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TimeAlertView : UIView
- (instancetype)initWithTitle:(NSString *)title messages:(NSString *)message cancelButtonTitle:(NSString *)cancelButtonTitle;
/**
 *  视图显示
 */
-(void)show;
/**
 *  视图隐藏
 */
-(void)dismiss;
@end

NS_ASSUME_NONNULL_END
