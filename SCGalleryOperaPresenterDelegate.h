/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCGalleryOperaPresenterDelegate <NSObject>
@optional
-(long long)operaPresenter:(id)arg1 overrideTransitionModeForItem:(id)arg2;

@required
-(id)operaPresenter:(id)arg1 didOpenViewWithItem:(id)arg2;
-(id)operaPresenter:(id)arg1 didOpenViewWithSnap:(id)arg2;
-(void)operaPresenter:(id)arg1 didSwitchToNewCreatedItem:(id)arg2;
-(void)operaPresenterBeganDismiss:(id)arg1;
-(void)operaPresenterCancelledDismiss:(id)arg1;
-(void)operaPresenterDidPresent:(id)arg1;
-(void)operaPresenterDidDismiss:(id)arg1 item:(id)arg2;

@end

