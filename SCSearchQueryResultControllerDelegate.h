/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSearchQueryResultControllerDelegate <NSObject>
@optional
-(void)searchQueryResultControllerWantsReloadFreshResult:(id)arg1;
-(BOOL)searchQueryResultControllerShouldReloadFreshResult:(id)arg1;
-(void)searchQueryResultControllerDidDelayReloadFreshResult:(id)arg1;
-(void)searchQueryResultControllerDidSkipUpdateQueryResult:(id)arg1;

@required
-(void)searchQueryResultController:(id)arg1 willUpdateResultForQuery:(id)arg2 fromQuery:(id)arg3;
-(void)searchQueryResultControllerDidUpdateQueryResult:(id)arg1;
-(id)presentingViewControllerForSearchQueryResultController:(id)arg1;

@end
