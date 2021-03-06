//
//  QuestionBank.h
//  Geography
//
//  Created by Omar Rahman on 4/28/15.
//  Copyright (c) 2015 Omar Rahman. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, BankType) {
    kCityBank,
    kCountryBank,
    kContinentBank
};

@interface QuestionBank : NSObject <NSCopying>

@property (nonatomic, readonly, copy) NSArray *questions;
@property (nonatomic, strong) NSString *name;
@property (nonatomic) id delegate;
@property (nonatomic) BankType bankType;

- (instancetype)init;
- (instancetype)initWithName:(NSString *)name
                       array:(NSArray *)array
                    bankType:(BankType)bankType;
- (NSString *)randomQuestion;
- (void)setDelegate:(id)delegate;

@end
