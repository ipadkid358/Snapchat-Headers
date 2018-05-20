/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:43 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SOJUUnlockablesOndemandLineItem, MGLMapCamera, NSString, SCOnDemandLensTemplateModel, SCOnDemandGeofilterCreativeData, SCOnDemandGeofilterMapboxItem;


@protocol SCOnDemandGeofilterSessionProtocol <NSObject>
@property (nonatomic,retain) SOJUUnlockablesOndemandLineItem * lineItem; 
@property (assign,getter=isNewUser,nonatomic) BOOL newUser; 
@property (assign,getter=isFirstTimeAccessMap,nonatomic) BOOL firstTimeAccessMap; 
@property (nonatomic,retain) MGLMapCamera * sessionMapCamera; 
@property (nonatomic,retain) NSString * tosVersion; 
@property (nonatomic,retain) SCOnDemandLensTemplateModel * lensReviewTemplateModel; 
@property (nonatomic,retain) SCOnDemandGeofilterCreativeData * creativeData; 
@property (assign,nonatomic) CLLocationCoordinate2D mapCenterCoordinate; 
@property (nonatomic,retain) SCOnDemandGeofilterMapboxItem * sessionLastSearchedMapboxItem; 
@required
-(NSString *)tosVersion;
-(void)setTosVersion:(id)arg1;
-(id)eventsManager;
-(void)cleanSessionEventData;
-(void)cleanSessionGeofilterRelatedInfo;
-(id)onDemandLensAllTimeHitsTemplateDataStore;
-(id)onDemandLensViewControllerWithTemplateCategory:(id)arg1 carouselParentView:(id)arg2;
-(void)setLensReviewTemplateModel:(id)arg1;
-(BOOL)personalGeofiltersEnabled;
-(void)updateLineItemWithUsageType:(long long)arg1;
-(SCOnDemandGeofilterCreativeData *)creativeData;
-(void)setCreativeData:(id)arg1;
-(id)entryViewControllers;
-(id)userBitmojiId;
-(void)dismissStickerPicker;
-(id)SCStickerFromSOJUSticker:(id)arg1;
-(void)imageForSticker:(id)arg1 completion:(/*^block*/id)arg2;
-(id)mapViewWithFrame:(CGRect)arg1;
-(BOOL)mapViewTooltipWasShown;
-(void)setFirstTimeAccessMap:(BOOL)arg1;
-(BOOL)mapViewHasBeenShownForUser;
-(void)setSessionLastSearchedMapboxItem:(id)arg1;
-(id)networkManager;
-(BOOL)isFirstTimeAccessMap;
-(void)avatarCurrentPersonWithCompletion:(/*^block*/id)arg1;
-(void)setSessionMapCamera:(id)arg1;
-(void)setMapCenterCoordinate:(CLLocationCoordinate2D)arg1;
-(MGLMapCamera *)sessionMapCamera;
-(CLLocationCoordinate2D)mapCenterCoordinate;
-(SCOnDemandGeofilterMapboxItem *)sessionLastSearchedMapboxItem;
-(void)setNewUser:(BOOL)arg1;
-(id)payments;
-(SCOnDemandLensTemplateModel *)lensReviewTemplateModel;
-(void)updateLineItemWithGeofilterName:(id)arg1;
-(void)updateLineItemLocale;
-(void)presentStickerPickerFromView:(id)arg1 belowSubview:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)templateTooltipWasShown;
-(void)setEntryViewControllers:(id)arg1;
-(id)initialViewController;
-(id)initialViewControllerWithCreateYourOwnFromMainCarousel:(BOOL)arg1;
-(BOOL)businessGeofiltersEnabled;
-(id)userEmail;
-(id)userSession;
-(void)setLineItem:(id)arg1;
-(id)userAgentHeader;
-(SOJUUnlockablesOndemandLineItem *)lineItem;
-(id)dataController;
-(id)userLocation;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(id)layoutProvider;
-(id)logger;
-(BOOL)isNewUser;

@end

