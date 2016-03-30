//
//  DetailViewController.h
//  DisplayPrincipalShop
//
//  Created by Liyana Roslie on 29/3/16.
//  Copyright © 2016 Liyana Roslie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

