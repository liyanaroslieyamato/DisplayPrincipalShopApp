//
//  Shop.h
//  DisplayPrincipalShop
//
//  Created by Liyana Roslie on 29/3/16.
//  Copyright © 2016 Liyana Roslie. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface Shop : NSManagedObject

@property (nonatomic, retain) NSString * do_number;
@property (nonatomic, retain) NSString * order_type;
@property (nonatomic, retain) NSString * shop_id;

@end
