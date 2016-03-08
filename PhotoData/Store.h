//
//  Store.h
//  objc.io example project (issue #1)
// Store 对象会关心数据加载、缓存和设置数据栈。它也经常被称为服务层或者仓库。

#import <Foundation/Foundation.h>


@interface Store : NSObject

+ (instancetype)store;

@property (readonly, nonatomic, strong) NSArray* photos;
@property (readonly, nonatomic, strong) NSArray* users;


/**
 *  解档model
 *
 *  @return model
 */
- (NSArray*)sortedPhotos;

@end
