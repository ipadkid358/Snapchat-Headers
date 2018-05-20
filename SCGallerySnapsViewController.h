/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:35 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIViewController.h>
#import <Snapchat/SCGalleryCollectionViewCustomizing.h>

@class SCUserSession, SCQueuePerformer, NSArray, UICollectionView, UICollectionViewFlowLayout, NSString;

@interface SCGallerySnapsViewController : UIViewController <SCGalleryCollectionViewCustomizing> {

	SCUserSession* _userSession;
	SCQueuePerformer* _performer;
	NSArray* _gallerySnaps;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;

}

@property (assign,nonatomic,__weak) SCUserSession * userSession;                             //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) SCQueuePerformer * performer;                                   //@synthesize performer=_performer - In the implementation block
@property (nonatomic,retain) NSArray * gallerySnaps;                                         //@synthesize gallerySnaps=_gallerySnaps - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCQueuePerformer *)performer;
-(void)setPerformer:(SCQueuePerformer *)arg1 ;
-(NSArray *)gallerySnaps;
-(void)setGallerySnaps:(NSArray *)arg1 ;
-(void)registerCellsForCollectionView:(id)arg1 ;
-(void)registerSupplementaryViewsForCollectionView:(id)arg1 ;
-(void)reloadCollectionView;
-(id)cellReuseIdentifierForSection:(long long)arg1 ;
-(id)initWithUserSession:(id)arg1 gallerySnaps:(id)arg2 ;
-(void)setGallerySnaps:(id)arg1 reloadCollectionView:(BOOL)arg2 ;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)setCollectionViewLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
@end

