/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIImageView.h>

@protocol SCMapboxStyleProvider;
@class SCMapboxSnapshotter, NSMutableArray;

@interface SCMapboxSnapshotView : UIImageView {

	id<SCMapboxStyleProvider> _mapboxStyleProvider;
	CGSize _lastSize;
	SCMapboxSnapshotter* _snapshotter;
	BOOL _loading;
	NSMutableArray* _loadingCompletions;
	double _zoomLevel;
	CLLocationCoordinate2D _centerCoordinate;

}

@property (nonatomic,readonly) double zoomLevel;                                     //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) CLLocationCoordinate2D centerCoordinate;              //@synthesize centerCoordinate=_centerCoordinate - In the implementation block
-(void)_addLoadingCompletion:(/*^block*/id)arg1 ;
-(void)setCenterCoordinate:(CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)prepareForReuse;
-(CLLocationCoordinate2D)centerCoordinate;
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(double)zoomLevel;
-(void)_updateImage;
-(id)initWithStyleProvider:(id)arg1 ;
@end
