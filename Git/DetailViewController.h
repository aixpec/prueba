//
//  DetailViewController.h
//  Git
//
//  Created by Andrés Ixpec on 5/02/16.
//  Copyright © 2016 Andrés Ixpec. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

