/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCSearchViewController.h>
#import <Snapchat/SCShakeToReportDelegate.h>

@protocol SCMapSearchViewControllerDelegate;
@class NSString;

@interface SCMapSearchViewController : SCSearchViewController <SCShakeToReportDelegate> {

	id<SCMapSearchViewControllerDelegate> _mapDelegate;

}

@property (assign,nonatomic,__weak) id<SCMapSearchViewControllerDelegate> mapDelegate;              //@synthesize mapDelegate=_mapDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSearchViewTextWithoutUpdate:(id)arg1 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id<SCMapSearchViewControllerDelegate>)mapDelegate;
-(void)setMapDelegate:(id<SCMapSearchViewControllerDelegate>)arg1 ;
@end
