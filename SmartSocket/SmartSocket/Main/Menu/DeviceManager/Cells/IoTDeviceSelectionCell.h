/**
 * IoTDeviceSelectionCell.h
 *
 * Copyright (c) 2014~2015 Xtreme Programming Group, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#import <UIKit/UIKit.h>

@class IoTDeviceSelectionCell;

@protocol IoTDeviceSelectionCellDelegate <NSObject>

- (void)IoTDeviceSelectionCell:(IoTDeviceSelectionCell *)cell didSelectedIndex:(NSInteger)index;

@end

@interface IoTDeviceSelectionCell : UITableViewCell

@property (nonatomic, assign) id <IoTDeviceSelectionCellDelegate>delegate;

/**
 * 数据，格式参照 IotPhotoRecoder 的定义。大于 3 个条目则只取前三条
 */
@property (nonatomic, strong) NSArray *datas;

/**
 * 选中的条目，－1则取消选择，其他有效的范围为 0-3
 */
@property (nonatomic, assign) NSInteger selectedIndex;

@end