//
//  TNServerURLConfig.h
//  XTrain
//
//  Created by Ben on 14/11/13.
//  Copyright (c) 2014年 XTeam. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString *const TNServerUrlChanged;

#define NET_CONFIG_FILE_NAME @"NetworkConfig-R"

@interface TNServerURLConfig : NSObject

@property (nonatomic, strong, readonly) NSString *HTTPUrlString;
@property (nonatomic, strong, readonly) NSString *dynamicHTTPUrlString;
@property (nonatomic, strong, readonly) NSString *HTTPSUrlString;
@property (nonatomic, strong, readonly) NSString *SSOUrlString;
@property (nonatomic, strong, readonly) NSString *chatUrlString;

/**
 *  单例
 *
 *  @return 单例对象
 */
+ (TNServerURLConfig *)defaultConfig;

/**
 *  加载配置
 */
- (void)loadConfig;

/**
 *  配置URL，支持运行时切换环境
 *
 *  @param dictionary URL字典
 */
- (void)configURLWithDictonary:(NSDictionary *)dictionary;

@end
