//
//  FXFormControllerSubclass.h
//  Pods
//
//  Created by Andrew Katz on 7/8/14.
//
//

@interface FXFormController ()

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView;
- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)index;
- (NSString *)tableView:(UITableView *)tableView titleForFooterInSection:(NSInteger)index;
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)index;
- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath;
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;

- (void)tableView:(UITableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath;
- (void)scrollViewWillBeginDragging:(UIScrollView *)scrollView;

@end
