//
//  PrincipalList.h
//  DisplayPrincipalShop
//
//  Created by Liyana Roslie on 29/3/16.
//  Copyright © 2016 Liyana Roslie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Shop;

@interface PrincipalList : NSManagedObject

@property (nonatomic, retain) NSString * principal_id;
@property (nonatomic, retain) NSString * name;
//@property (nonatomic, retain) NSSet *shops;
@property (nonatomic, retain) Shop *details;

@end

@interface PrincipalList (CoreDataGeneratedAccessors)

- (void)addShopsObject:(Shop *)value;
- (void)removeShopsObject:(Shop *)value;
- (void)addShops:(NSSet *)values;
- (void)removeShops:(NSSet *)values;

@end

