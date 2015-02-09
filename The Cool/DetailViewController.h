//
//  DetailViewController.h
//  The Cool
//
//  Created by Jarrett Coger on 2/9/15.
//  Copyright (c) 2015 Cool App. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

