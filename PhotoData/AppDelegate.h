//
//  AppDelegate.h
//  objc.io example project (issue #1)
//

// http://objccn.io/issue-1-1/
// 总结: 把数据的解档/加载/缓存等操作/甚至是数据源代理移到model层, 使cotroller轻量化.

#import <UIKit/UIKit.h>


@class Store;


@interface AppDelegate : UIResponder <UIApplicationDelegate>

+ (instancetype)sharedDelegate;

@property (strong, nonatomic) UIWindow *window;
@property (readonly, strong, nonatomic) Store *store;

@end
