//
//  ZFDouYinControlView.h
//  ZFPlayer_Example
//
//  Created by 任子丰 on 2018/6/4.
//  Copyright © 2018年 紫枫. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ZFPlayer-moolban/ZFPlayer.h>

@interface ZFDouYinControlView : UIView <ZFPlayerMediaControl>

- (void)resetControlView;

- (void)showTitle:(NSString *)title coverURLString:(NSString *)coverUrl;


@end
