/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:19 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCOnDemandGeofilterScreenShotTableViewCellViewModel.h>
@class NSURL, UIImage, NSString, UIColor, SOJUUnlockablesOndemandGeofence;


@protocol SCOnDemandGeofilterScreenShotTableViewCellViewModel <NSObject,NSCoding,NSCopying>
@property (nonatomic,readonly) BOOL enableActivityIndicator; 
@property (nonatomic,copy,readonly) NSURL * thumbNailURL; 
@property (nonatomic,copy,readonly) UIImage * thumbNail; 
@property (nonatomic,copy,readonly) NSString * statusContent; 
@property (nonatomic,copy,readonly) UIColor * statusColor; 
@property (nonatomic,readonly) double cellHeight; 
@property (nonatomic,readonly) double cellWidth; 
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandGeofence * geofence; 
@required
-(SOJUUnlockablesOndemandGeofence *)geofence;
-(NSURL *)thumbNailURL;
-(UIImage *)thumbNail;
-(NSString *)statusContent;
-(UIColor *)statusColor;
-(double)cellWidth;
-(BOOL)enableActivityIndicator;
-(double)cellHeight;

@end


@class NSURL, UIImage, NSString, UIColor, SOJUUnlockablesOndemandGeofence;

@interface SCOnDemandGeofilterScreenShotTableViewCellViewModel : NSObject <SCOnDemandGeofilterScreenShotTableViewCellViewModel> {

	BOOL _enableActivityIndicator;
	NSURL* _thumbNailURL;
	UIImage* _thumbNail;
	NSString* _statusContent;
	UIColor* _statusColor;
	double _cellHeight;
	double _cellWidth;
	SOJUUnlockablesOndemandGeofence* _geofence;

}

@property (copy) id assetSelectionHandler; 
@property (copy) id mapShotSelectionHandler; 
@property (nonatomic,readonly) BOOL enableActivityIndicator;                                 //@synthesize enableActivityIndicator=_enableActivityIndicator - In the implementation block
@property (nonatomic,copy,readonly) NSURL * thumbNailURL;                                    //@synthesize thumbNailURL=_thumbNailURL - In the implementation block
@property (nonatomic,copy,readonly) UIImage * thumbNail;                                     //@synthesize thumbNail=_thumbNail - In the implementation block
@property (nonatomic,copy,readonly) NSString * statusContent;                                //@synthesize statusContent=_statusContent - In the implementation block
@property (nonatomic,copy,readonly) UIColor * statusColor;                                   //@synthesize statusColor=_statusColor - In the implementation block
@property (nonatomic,readonly) double cellHeight;                                            //@synthesize cellHeight=_cellHeight - In the implementation block
@property (nonatomic,readonly) double cellWidth;                                             //@synthesize cellWidth=_cellWidth - In the implementation block
@property (nonatomic,copy,readonly) SOJUUnlockablesOndemandGeofence * geofence;              //@synthesize geofence=_geofence - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fasterCodingVersion;
+(unsigned long long*)fasterCodingKeys;
-(BOOL)preferFasterCoding;
-(void)encodeWithFasterCoder:(id)arg1 ;
-(void)decodeWithFasterDecoder:(id)arg1 ;
-(void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setBool:(BOOL)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(SOJUUnlockablesOndemandGeofence *)geofence;
-(void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2 ;
-(void)setMapShotSelectionHandler:(id)arg1 ;
-(void)setAssetSelectionHandler:(id)arg1 ;
-(NSURL *)thumbNailURL;
-(UIImage *)thumbNail;
-(NSString *)statusContent;
-(UIColor *)statusColor;
-(double)cellWidth;
-(id)mapShotSelectionHandler;
-(id)assetSelectionHandler;
-(id)initWithEnableActivityIndicator:(BOOL)arg1 thumbNailURL:(id)arg2 thumbNail:(id)arg3 statusContent:(id)arg4 statusColor:(id)arg5 cellHeight:(double)arg6 cellWidth:(double)arg7 geofence:(id)arg8 ;
-(BOOL)enableActivityIndicator;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)cellHeight;
@end

