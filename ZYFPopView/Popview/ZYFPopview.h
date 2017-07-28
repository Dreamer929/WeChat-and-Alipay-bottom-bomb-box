//
//  ZYFPopview.h
//  ZYFPopView
//
//  Created by moxi on 2017/7/28.
//  Copyright © 2017年 zyf. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^OnMSStringViewDoneBlock) (NSInteger selectIndex);
typedef void (^OnMSStringViewCancleBlock)();

@interface ZYFPopview : UIView

@property (nonatomic, copy)OnMSStringViewDoneBlock onDoneBlock;
@property (nonatomic, copy)OnMSStringViewCancleBlock onCancleBlock;

-(instancetype)initInView:(UIView *)hostView rows:(NSMutableArray*)items doneBlock:(void(^)(NSInteger selectIndex))ondoneBlock cancleBlock:(void(^)())cancleBlock;

-(void)showPopView;

@end
