/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:23 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCSearchFriendsSubViewControllerDelegate <NSObject>
@optional
-(void)setHasTappedOnFriendSinceSearch:(BOOL)arg1;
-(long long)getProfilePageType;
-(long long)keyStrokeCount;
-(void)didDismissSearch;
-(void)didBeginEditingSearchBox;
-(void)setKeyStrokeCount:(long long)arg1;
-(void)performServerSearchIfNeeded:(id)arg1;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@required
-(id)pageName;
-(id)getSearchResultsBySection:(id)arg1 withSearchText:(id)arg2;
-(id)cellForModelView:(id)arg1 onTableView:(id)arg2 forRowAtindexPath:(id)arg3;

@end

