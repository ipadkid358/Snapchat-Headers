/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Snapchat/SCProfilePageSectionContentControllerDelegate.h>

@protocol SCProfilePageSectionContentCoordinating, SCSearchSectionCreating, UICollectionViewDelegate;
@class UICollectionView, SCProfilePageSectionContentController, NSString;

@interface SCProfilePageSectionContentViewController : UIViewController <SCProfilePageSectionContentControllerDelegate> {

	id<SCProfilePageSectionContentCoordinating> _coordinator;
	id<SCSearchSectionCreating> _creator;
	id<UICollectionViewDelegate> _collectionViewDelegate;
	UICollectionView* _sectionCollectionView;
	SCProfilePageSectionContentController* _tabContentController;

}

@property (nonatomic,readonly) UICollectionView * sectionCollectionView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)presentingViewControllerForSectionBasedCollectionViewUpdater:(id)arg1 ;
-(id)initWithCoordinator:(id)arg1 sectionCreator:(id)arg2 collectionViewDelegate:(id)arg3 ;
-(UICollectionView *)sectionCollectionView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
@end
