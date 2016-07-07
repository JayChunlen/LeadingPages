//
//  LeadingPageView.h
//  BenefitEveryday
//
//  Created by chunlen on 15/9/8.
//  Copyright (c) 2015年 chunlen. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface LeadingPageView : UIView

@property (nonatomic,strong) NSArray *images;

@property (nonatomic, assign) int scrollDirection;//0代表横向，1，代表纵向

- (instancetype)initWithFrame:(CGRect)frame Images:(NSArray *)images;

@end
