//
//  MasterViewController.h
//  hello-ios
//
//  Created by iq2 on 12.01.13.
//  Copyright (c) 2013 iq2. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
