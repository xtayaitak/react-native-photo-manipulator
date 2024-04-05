export interface Point {
  x: number;
  y: number;
}

export interface Size {
  width: number;
  height: number;
}
export interface Rect extends Size, Point {}

export interface TextOptions {
  position: Point;
  text: string;
  textSize: number;
  fontName?: string;
  color?: string;
  thickness?: number;
  rotation?: number;
}

export interface Color {
  r: number;
  g: number;
  b: number;
  a: number;
}

export type ImageSource = string | number;

export enum MimeType {
  JPEG = 'image/jpeg',
  PNG = 'image/png',
}

export enum FlipMode {
  Both = 'Both',
  Horizontal = 'Horizontal',
  Vertical = 'Vertical',
}

interface PhotoBatchPrintText {
  operation: 'text';
  options: TextOptions;
}
interface PhotoBatchOverlay {
  operation: 'overlay';
  overlay: ImageSource;
  position: Point;
}
interface PhotoBatchFlip {
  operation: 'flip';
  mode: FlipMode;
}

export type PhotoBatchOperations =
  | PhotoBatchPrintText
  | PhotoBatchOverlay
  | PhotoBatchFlip;
