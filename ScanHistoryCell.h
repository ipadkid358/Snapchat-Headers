/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:51 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SWTableViewCell.h>

@protocol ScanHistoryCellDelegate;
@class SCFriendProfileCellTextViewV2, NSDictionary, SCScannableInfo, SCScanHistoryItem, SCLoadingIndicatorView, UIView, UIImageView, NSString, SCUserSession, NSArray, SOJUScannableScannableAction;

@interface ScanHistoryCell : SWTableViewCell {

	SCFriendProfileCellTextViewV2* _textViewV2;
	BOOL _deleting;
	NSDictionary* _scanSnapshotData;
	SCScannableInfo* _scannableInfo;
	SCScanHistoryItem* _historyItem;
	SCLoadingIndicatorView* _deleteProgressView;
	id<ScanHistoryCellDelegate> _navDelegate;
	UIView* _bottomBorder;
	UIView* _thumbnailContainer;
	UIImageView* _thumbnail;
	NSString* _mainTitle;
	NSString* _subTitle;
	NSString* _thirdTitle;
	NSString* _imageUrlString;
	NSString* _snapcodeScanData;
	SCUserSession* _userSession;
	NSArray* _scannableActions;
	long long _scannableTopActionType;
	SOJUScannableScannableAction* _topScannableAction;

}

@property (nonatomic,retain) UIView * bottomBorder;                                          //@synthesize bottomBorder=_bottomBorder - In the implementation block
@property (nonatomic,retain) UIView * thumbnailContainer;                                    //@synthesize thumbnailContainer=_thumbnailContainer - In the implementation block
@property (nonatomic,retain) UIImageView * thumbnail;                                        //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,retain) NSString * mainTitle;                                           //@synthesize mainTitle=_mainTitle - In the implementation block
@property (nonatomic,retain) NSString * subTitle;                                            //@synthesize subTitle=_subTitle - In the implementation block
@property (nonatomic,retain) NSString * thirdTitle;                                          //@synthesize thirdTitle=_thirdTitle - In the implementation block
@property (nonatomic,retain) NSString * imageUrlString;                                      //@synthesize imageUrlString=_imageUrlString - In the implementation block
@property (nonatomic,retain) NSString * snapcodeScanData;                                    //@synthesize snapcodeScanData=_snapcodeScanData - In the implementation block
@property (nonatomic,retain) SCUserSession * userSession;                                    //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) NSArray * scannableActions;                                   //@synthesize scannableActions=_scannableActions - In the implementation block
@property (assign,nonatomic) long long scannableTopActionType;                               //@synthesize scannableTopActionType=_scannableTopActionType - In the implementation block
@property (nonatomic,retain) SOJUScannableScannableAction * topScannableAction;              //@synthesize topScannableAction=_topScannableAction - In the implementation block
@property (nonatomic,retain) NSDictionary * scanSnapshotData;                                //@synthesize scanSnapshotData=_scanSnapshotData - In the implementation block
@property (nonatomic,retain) SCScannableInfo * scannableInfo;                                //@synthesize scannableInfo=_scannableInfo - In the implementation block
@property (nonatomic,retain) SCScanHistoryItem * historyItem;                                //@synthesize historyItem=_historyItem - In the implementation block
@property (nonatomic,retain) SCLoadingIndicatorView * deleteProgressView;                    //@synthesize deleteProgressView=_deleteProgressView - In the implementation block
@property (assign,nonatomic) BOOL deleting;                                                  //@synthesize deleting=_deleting - In the implementation block
@property (assign,nonatomic,__weak) id<ScanHistoryCellDelegate> navDelegate;                 //@synthesize navDelegate=_navDelegate - In the implementation block
-(NSArray *)scannableActions;
-(BOOL)deleting;
-(void)setBottomBorderHidden:(BOOL)arg1 ;
-(NSString *)thirdTitle;
-(void)setThirdTitle:(NSString *)arg1 ;
-(NSDictionary *)scanSnapshotData;
-(void)setScanSnapshotData:(NSDictionary *)arg1 ;
-(void)setScannableInfo:(SCScannableInfo *)arg1 ;
-(SCScannableInfo *)scannableInfo;
-(void)setNavDelegate:(id<ScanHistoryCellDelegate>)arg1 ;
-(void)setHistoryItem:(SCScanHistoryItem *)arg1 ;
-(void)clearTitle;
-(void)showLoader:(BOOL)arg1 ;
-(void)setDeleting:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 mainLabel:(id)arg3 subLabel:(id)arg4 thirdLabel:(id)arg5 thumbnailWithURL:(id)arg6 scanSnapshotData:(id)arg7 scanData:(id)arg8 userSession:(id)arg9 ;
-(void)setTopScannableAction:(SOJUScannableScannableAction *)arg1 ;
-(void)setScannableTopActionType:(long long)arg1 ;
-(SOJUScannableScannableAction *)topScannableAction;
-(id<ScanHistoryCellDelegate>)navDelegate;
-(void)updateFields;
-(void)processData;
-(void)setImageUrlString:(NSString *)arg1 ;
-(SCLoadingIndicatorView *)deleteProgressView;
-(void)setDeleteProgressView:(SCLoadingIndicatorView *)arg1 ;
-(void)setSnapcodeScanData:(NSString *)arg1 ;
-(void)_parseScanSnapshotData;
-(void)_updateThumbnailWithURL;
-(NSString *)imageUrlString;
-(void)updateWithMainLabel:(id)arg1 subLabel:(id)arg2 thirdLabel:(id)arg3 thumbnailWithURL:(id)arg4 scanSnapshotData:(id)arg5 scanData:(id)arg6 ;
-(NSString *)snapcodeScanData;
-(long long)scannableTopActionType;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)prepareForReuse;
-(UIImageView *)thumbnail;
-(void)setThumbnail:(UIImageView *)arg1 ;
-(SCUserSession *)userSession;
-(void)setUserSession:(SCUserSession *)arg1 ;
-(void)updateViews;
-(void)setupViews;
-(NSString *)mainTitle;
-(void)setMainTitle:(NSString *)arg1 ;
-(NSString *)subTitle;
-(void)setSubTitle:(NSString *)arg1 ;
-(SCScanHistoryItem *)historyItem;
-(void)setThumbnailContainer:(UIView *)arg1 ;
-(UIView *)thumbnailContainer;
-(UIView *)bottomBorder;
-(void)setBottomBorder:(UIView *)arg1 ;
@end

