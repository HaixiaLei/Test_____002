//
//  Singleton.h
//  DemonProject
//
//  Created by david on 2018/7/10.
//  Copyright © 2018年 david. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppDelegate.h"
#import <AFNetworking.h>

extern AppDelegate *mainDelegate;

@interface Singleton : NSObject

+ (Singleton *)shared;//创建单例

- (void)setupNetDetect;//设置网络连接状态监听
- (void)setupTimerFor1Second;//设置1秒的计时器

@property(nonatomic, assign) AFNetworkReachabilityStatus netStatus;//网络状态



@property(nonatomic, copy) NSString *cookie;

/*登录信息*/
@property(nonatomic, assign) BOOL isShiwan;
@property(nonatomic, copy) NSString *password;
@property(nonatomic, copy) NSString *Agents;
@property(nonatomic, copy) NSString *isTest;
@property(nonatomic, copy) NSString *Money;
@property(nonatomic, copy) NSString *lastLoginTime;
@property(nonatomic, copy) NSString *Oid;
@property(nonatomic, copy) NSString *Alias;
@property(nonatomic, copy) NSString *isBindCard;
@property(nonatomic, copy) NSString *UserName;
@property(nonatomic, copy) NSString *LoginTime;
@property(nonatomic, copy) NSString *ag_balance;//ag余额

@end
