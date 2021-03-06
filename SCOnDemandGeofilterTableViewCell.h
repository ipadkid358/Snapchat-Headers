/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol SCOnDemandGeofilterSessionProtocol;
@class UILabel, UIView, UIImageView, SCOnDemandGeofilterTableViewCellViewModel, SCLoadingIndicatorView;

@interface SCOnDemandGeofilterTableViewCell : UITableViewCell {

	UILabel* _geofilterStatus;
	UILabel* _infoLabel;
	UIView* _separatorLine;
	UIImageView* _thumbnail;
	UIView* _dot;
	UIView* _contentContainer;
	SCOnDemandGeofilterTableViewCellViewModel* _vm;
	SCLoadingIndicatorView* _activityIndicator;
	id<SCOnDemandGeofilterSessionProtocol> _geofilterSession;

}

@property (assign,nonatomic,__weak) id<SCOnDemandGeofilterSessionProtocol> geofilterSession;              //@synthesize geofilterSession=_geofilterSession - In the implementation block
+(id)mutableAttributedString:(id)arg1 font:(id)arg2 fontColor:(id)arg3 ;
-(id<SCOnDemandGeofilterSessionProtocol>)geofilterSession;
-(void)setGeofilterSession:(id<SCOnDemandGeofilterSessionProtocol>)arg1 ;
-(void)layoutMasonryViews;
-(void)setupWithViewModel:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
@end

