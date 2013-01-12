//
//  DetailViewController.h
//  hello-ios
//
//  Created by iq2 on 12.01.13.
//  Copyright (c) 2013 iq2. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
