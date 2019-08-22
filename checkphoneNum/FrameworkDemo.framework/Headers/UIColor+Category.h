//
//  UIColor+Category.h
//  SoilSample
//
//  Created by ChenYinHai on 2017/12/25.
//  Copyright © 2017年 cyhai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Category)

/**
 字符串转颜色"#ffffff"
 */
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;
@end
