//
//  ArrayDataSource.h
//  objc.io example project (issue #1)
//

#import <Foundation/Foundation.h>


typedef void (^TableViewCellConfigureBlock)(id cell, id item);


@interface ArrayDataSource : NSObject <UITableViewDataSource>

/**
 *  初始化
 *
 *  @param anItems             dataArray
 *  @param aCellIdentifier     cell 重用标识符
 *  @param aConfigureCellBlock cell 配置 block
 *
 *  @return cell
 */
- (id)initWithItems:(NSArray *)anItems
     cellIdentifier:(NSString *)aCellIdentifier
 configureCellBlock:(TableViewCellConfigureBlock)aConfigureCellBlock;

- (id)itemAtIndexPath:(NSIndexPath *)indexPath;

@end
