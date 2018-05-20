/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCOnDemandGeofilterBaseLeftSwipableViewController.h>
#import <Snapchat/SCOnDemandGeofilterDataControllerListener.h>

@protocol SCOnDemandGeofilterCreativeStudioViewDelegate;
@class NSMutableArray, SCOnDemandGeofilterCreativeStudioView, SOJUUnlockablesOndemandTemplateCategory, NSString;

@interface SCOnDemandLensCreativeStudioViewController : SCOnDemandGeofilterBaseLeftSwipableViewController <SCOnDemandGeofilterDataControllerListener> {

	NSMutableArray* _creativeDataList;
	SCOnDemandGeofilterCreativeStudioView* _creativeStudioView;
	id<SCOnDemandGeofilterCreativeStudioViewDelegate> _creativeStudioDelegate;
	long long _selectedIndex;
	SOJUUnlockablesOndemandTemplateCategory* _category;

}

@property (assign,nonatomic) long long selectedIndex;                                         //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) SOJUUnlockablesOndemandTemplateCategory * category;              //@synthesize category=_category - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldDisplayStatusBar;
-(BOOL)disableLeftSwipe;
-(id)initWithTemplateCategory:(id)arg1 andGeofilterSession:(id)arg2 creativeStudioDelegate:(id)arg3 selectedIndex:(long long)arg4 ;
-(void)setInteractionEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)didApplyLensWithObjectId:(id)arg1 ;
-(void)_rebuildCreativeDataListFromCategory;
-(void)_updateCreativeData;
-(void)dataController:(id)arg1 didUploadAssetMetadata:(id)arg2 success:(BOOL)arg3 ;
-(void)setCategory:(SOJUUnlockablesOndemandTemplateCategory *)arg1 ;
-(SOJUUnlockablesOndemandTemplateCategory *)category;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
@end
