//
//  DetailViewController.h
//  HomeBase
//
//  Created by Aaron Oro on 2/12/14.
//  Copyright (c) 2014 HomeBase. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
