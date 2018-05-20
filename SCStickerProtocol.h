/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCStickerProtocol <NSObject,NSCoding,NSCopying>
@optional
-(void)cancelImageDownloadingRequest:(id)arg1;
-(id)thumbnailImageWithUserSession:(id)arg1 contexts:(id)arg2 completion:(/*^block*/id)arg3;
-(void)imageWithUserSession:(id)arg1 contexts:(id)arg2 isDecoded:(BOOL)arg3 completion:(/*^block*/id)arg4;
-(id)stickerStateWithRelativeSize:(CGSize)arg1 center:(CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4 isTracking:(BOOL)arg5 trackingTrajectory:(id)arg6;
-(id)text;
-(id)config;

@required
-(id)stickerId;
-(id)packId;
-(id)toSOJUSticker;
-(id)loggingParamters;
-(id)loggingParamtersWithGeoStickerId;
-(id)shortLoggingName;
-(id)shortLoggingNameWithGeoStickerId;
-(unsigned long long)type;

@end
