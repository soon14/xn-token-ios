//
//  PublishService.h
//  Coin
//
//  Created by  tianlei on 2017/12/07.
//  Copyright © 2017年  tianlei. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, PublishType) {
    
    PublishTypeSaveDraft = 0,  //发布
    PublishTypePublish = 1,
    PublishTypePublishOrSaveDraft = 2, // 可能为直接发布，也可能是保存草稿
    PublishTypePublishDraft = 3,
    PublishTypePublishRedit = 4
    
};

@interface PublishService : NSObject

+ (NSString *)publishCodeByType:(PublishType) type;

@end

FOUNDATION_EXTERN NSString *const kSaveDraft;
FOUNDATION_EXTERN NSString *const kPublish;
FOUNDATION_EXTERN NSString *const kPublishDraft;
FOUNDATION_EXTERN NSString *const kPublishRedit;
