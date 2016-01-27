//
//  CustomTableViewCell.h
//  EveryDo
//
//  Created by Thiago Heitling on 2016-01-26.
//  Copyright © 2016 Thiago Heitling. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;
@property (weak, nonatomic) IBOutlet UILabel *priorityLabel;
//@property (weak, nonatomic) IBOutlet UILabel *isDoneLabel;

@end
