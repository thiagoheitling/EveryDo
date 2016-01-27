//
//  DetailViewController.h
//  EveryDo
//
//  Created by Thiago Heitling on 2016-01-26.
//  Copyright © 2016 Thiago Heitling. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Todo.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Todo *todoItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UILabel *taskDescriptionLabel;
@property (weak, nonatomic) IBOutlet UILabel *priorityNumberLabel;

@end

