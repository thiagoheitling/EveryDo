//
//  MasterViewController.h
//  EveryDo
//
//  Created by Thiago Heitling on 2016-01-26.
//  Copyright © 2016 Thiago Heitling. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end

